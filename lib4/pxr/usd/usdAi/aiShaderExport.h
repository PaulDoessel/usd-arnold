#ifndef USDAI_SHADER_EXPORT_H
#define USDAI_SHADER_EXPORT_H

#include "pxr/usd/usdAi/aiShader.h"

#include <ai.h>

PXR_NAMESPACE_OPEN_SCOPE

class AiShaderExport {
public:
    AiShaderExport(const UsdStagePtr& _stage,
                   const SdfPath& parent_scope = SdfPath(),
                   const UsdTimeCode& _time_code = UsdTimeCode::Default());
    ~AiShaderExport();
    void bind_material(const SdfPath& shader_path, const SdfPath& shape_path);
    SdfPath export_material(const char* material_name,
                            AtNode* surf_shader, AtNode* disp_shader=nullptr);
    SdfPath export_arnold_node(const AtNode* arnold_node,
                               SdfPath& parent_path, const std::set<std::string>* exportable_params = nullptr);
    static void clean_arnold_name(std::string& name);
    bool get_output(const AtNode* src_arnold_node, UsdAiShader& src_shader, UsdShadeOutput& out,
                    bool is_node_type=false, int32_t comp_index=-1);
    bool export_connection(const AtNode* dest_arnold_node, UsdAiShader& dest_shader,
                           const char* dest_param_name, uint8_t arnold_param_type);
    bool export_connection(const AtNode* dest_arnold_node, UsdAiShader& dest_shader,
                           const char* dest_param_name,
                           const AtNode* src_arnold_node, UsdAiShader& src_shader,
                           int32_t src_comp_index=-1);
    // bool export_connection(const AtNode* dest_arnold_node, UsdAiShader& dest_shader,
    //                        const char* dest_param_name, uint8_t arnold_param_type,
    //                        const AtNode* src_arnold_node, UsdAiShader& src_shader,
    //                        int32_t src_comp_index=-1);
    void export_parameter(const AtNode* arnold_node, UsdAiShader& shader,
                          const char* arnold_param_name,
                          uint8_t arnold_param_type, bool user);
    void collapse_shaders();

protected:
    const UsdStagePtr m_stage;
    SdfPath m_shaders_scope;
    UsdTimeCode m_time_code;

private:
    std::map<const AtNode*, SdfPath> m_shader_to_usd_path;

};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
