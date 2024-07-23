﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 17.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace XamlGen.Templates.Code.Framework.Bodies
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using OM;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    public partial class Class : CppCodeGenerator<ClassDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#include \"");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CppFrameworkGeneratedHeaderFileName));
            this.Write("\"\r\n");
 foreach (var dependency in Model.Dependencies.OfType<ClassDefinition>().Where(d => d.GenerateFrameworkHFile && !d.IsValueType && !d.IsInterface && d != Model.BaseClass).OrderBy(d => d.CppFrameworkGeneratedHeaderFileName)) { 
            this.Write("#include \"");
            this.Write(this.ToStringHelper.ToStringWithCulture(dependency.CppFrameworkGeneratedHeaderFileName));
            this.Write("\"\r\n");
 } 
            this.Write("#include \"XamlTelemetry.h\"\r\n\r\n");
 if (!Model.IsStatic) { 
            this.Write("// Constructors/destructors.\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedClassFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GeneratedClassName));
            this.Write("()");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetFieldInitializerString(Model)));
            this.Write("\r\n{\r\n}\r\n\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedClassFullName)));
            this.Write("::~");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GeneratedClassName));
            this.Write("()\r\n{\r\n}\r\n\r\nHRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedClassFullName)));
            this.Write("::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)\r\n{\r\n    if (Inlin" +
                    "eIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.AbiImplementationFullName)));
            this.Write(")))\r\n    {\r\n        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.AbiImplementationFullName)));
            this.Write("*>(this);\r\n    }\r\n");
     if (Model.VelocityVersion != 0) { 
            this.Write("#if WI_IS_FEATURE_PRESENT(");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetFeatureName(Model.VelocityVersion)));
            this.Write(")\r\n");
     }
     foreach (var version in Model.Versions.OrderBy(v => v.Version).Select(v => v.GetProjection())) {
           if (VelocityFeatures.IsVelocityVersion(version.Version)) { 
            this.Write("#if WI_IS_FEATURE_PRESENT(");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetFeatureName(version.Version)));
            this.Write(")\r\n");
         }
           if (version.IdlClassInfo.HasPrimaryInterface) { 
            this.Write("    else if (InlineIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullInterfaceName)));
            this.Write("))");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetQueryInterfaceClause(version.VelocityVersion != 0 ? version.VelocityVersion : version.Version)));
            this.Write(")\r\n    {\r\n");
             if (version.IsVersionInterfaceForwarded()) { 
            this.Write("        *ppObject = ctl::interface_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullInterfaceName)));
            this.Write(">(this);\r\n    }\r\n");
             } else { 
            this.Write("        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullInterfaceName)));
            this.Write("*>(this);\r\n    }\r\n");
             }
           }
           if (version.IdlClassInfo.HasProtectedMembers) { 
            this.Write("    else if (InlineIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullProtectedMembersInterfaceName)));
            this.Write("))");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetQueryInterfaceClause(version.VelocityVersion != 0 ? version.VelocityVersion : version.Version)));
            this.Write(")\r\n    {\r\n");
              if (version.IsVersionInterfaceForwarded()) { 
            this.Write("        *ppObject = ctl::interface_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullProtectedMembersInterfaceName)));
            this.Write(">(this);\r\n    }\r\n");
              } else { 
            this.Write("        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullProtectedMembersInterfaceName)));
            this.Write("*>(this);\r\n    }\r\n");
              }
           }
           if (version.IdlClassInfo.HasVirtualMembers) { 
            this.Write("    else if (InlineIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullVirtualMembersInterfaceName)));
            this.Write("))");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetQueryInterfaceClause(version.VelocityVersion != 0 ? version.VelocityVersion : version.Version)));
            this.Write(")\r\n    {\r\n");
              if (version.IsVersionInterfaceForwarded()) { 
            this.Write("        *ppObject = ctl::interface_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullVirtualMembersInterfaceName)));
            this.Write(">(this);\r\n    }\r\n");
              } else { 
            this.Write("        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullVirtualMembersInterfaceName)));
            this.Write("*>(this);\r\n    }\r\n");
              }
           }
           foreach (var implementedInterface in version.ImplementedInterfaces.OrderBy(implementedInterface => implementedInterface.AbiFullName)) { 
            this.Write("    else if (InlineIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(implementedInterface.AbiFullName)));
            this.Write(")))\r\n    {\r\n        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(implementedInterface.AbiFullName)));
            this.Write("*>(this);\r\n    }\r\n");
         }
          if (VelocityFeatures.IsVelocityVersion(version.Version)) { 
            this.Write("#endif\r\n");
         }
       } 
     if (Model.VelocityVersion != 0) { 
            this.Write("#endif\r\n");
     }
            this.Write("    else\r\n    {\r\n        RRETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetBaseClassName(Model)));
            this.Write("::QueryInterfaceImpl(iid, ppObject));\r\n    }\r\n\r\n    AddRefOuter();\r\n    RRETURN(S" +
                    "_OK);\r\n}\r\n\r\n// Properties.\r\n");
     foreach (var property in Model.InstanceProperties.Where(m => m.GenerateStub).OrderBy(property => property.Name)) { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Property>(property)));
            this.Write("\r\n");
     } 
            this.Write("\r\n");
 if (Model.BaseClass.IsObjectType && Model.InstanceEvents.Where(m => !m.XamlEventFlags.IsHidden).Count() > 0) { 
            this.Write("_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedClassFullName)));
            this.Write("::EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const pt" +
                    "Token) const\r\n{\r\n    HRESULT hr = S_OK;\r\n\r\n    ARG_VALIDRETURNPOINTER(ptToken);\r" +
                    "\n    ARG_NOTNULL(pValue, \"value\");\r\n    IFC(CheckThread());\r\n\r\nCleanup:\r\n    ret" +
                    "urn S_OK;\r\n}\r\n");
 } 
            this.Write("// Events.\r\n");
     foreach (var ev in Model.InstanceEvents.Where(m => m.GenerateStub && !m.XamlEventFlags.IsHidden).OrderBy(ev => ev.Name)) { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Event>(ev)));
            this.Write("\r\n");
     } 
            this.Write("\r\n// Methods.\r\n");
     if (Model.TemplateParts.Any()) { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<ApplyTemplateMethod>(Model)));
            this.Write("\r\n");
     }
       foreach (var method in Model.InstanceMethods.Where(m => m.GenerateStub).OrderBy(method => method.Name)) { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Method>(method)));
            this.Write("\r\n");
     }
   } 
            this.Write("\r\n");
 // Only supports events on UIElements and their descendents
    if (Model.IsAUIElement && Model.Events.Where(m => m.IdlEventInfo.ForwardDeclareIReference).Count() > 0) { 
            this.Write("_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedClassFullName)));
            this.Write("::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHa" +
                    "ndler, _In_ BOOLEAN handledEventsToo)\r\n{\r\n    switch (nEventIndex)\r\n    {\r\n");
     foreach (var ev in Model.Events.Where(m => m.IdlEventInfo.ForwardDeclareIReference).OrderBy(ev => ev.Name)) { 
            this.Write("    case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.IndexName));
            this.Write(":\r\n        {\r\n            ctl::ComPtr<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(ev.EventHandlerType.AbiFullName)));
            this.Write("> spEventHandler;\r\n            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEve" +
                    "ntHandler.ReleaseAndGetAddressOf()));\r\n\r\n            if (nullptr != spEventHandl" +
                    "er)\r\n            {\r\n                ");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.EventSourceTypeName));
            this.Write("* pEventSource = nullptr;\r\n                IFC_RETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.GetEventSourceName));
            this.Write("(&pEventSource));\r\n                IFC_RETURN(pEventSource->AddHandler(spEventHan" +
                    "dler.Get()");
 if (ev.IsRouted) { 
            this.Write(", handledEventsToo");
 } 
            this.Write("));\r\n            }\r\n            else\r\n            {\r\n                IFC_RETURN(E" +
                    "_INVALIDARG);\r\n            }\r\n        }\r\n        break;\r\n");
     } 
 if (Model.Name == "UIElement") { 
            this.Write("    default:\r\n        IFC_RETURN(E_INVALIDARG);\r\n");
 } else { 
            this.Write("    default:\r\n        IFC_RETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.BaseClass.GeneratedClassFullName)));
            this.Write("::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));\r\n");
 } 
            this.Write("        break;\r\n    }\r\n\r\n    return S_OK;\r\n}\r\n\r\n_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedClassFullName)));
            this.Write("::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* " +
                    "pHandler)\r\n{\r\n    switch (nEventIndex)\r\n    {\r\n");
     foreach (var ev in Model.Events.Where(m => m.IdlEventInfo.ForwardDeclareIReference).OrderBy(ev => ev.Name)) { 
            this.Write("    case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.IndexName));
            this.Write(":\r\n        {\r\n            ctl::ComPtr<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(ev.EventHandlerType.AbiFullName)));
            this.Write("> spEventHandler;\r\n            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEve" +
                    "ntHandler.ReleaseAndGetAddressOf()));\r\n\r\n            if (nullptr != spEventHandl" +
                    "er)\r\n            {\r\n                ");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.EventSourceTypeName));
            this.Write("* pEventSource = nullptr;\r\n                IFC_RETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.GetEventSourceName));
            this.Write("(&pEventSource));\r\n                IFC_RETURN(pEventSource->RemoveHandler(spEvent" +
                    "Handler.Get()));\r\n            }\r\n            else\r\n            {\r\n              " +
                    "  IFC_RETURN(E_INVALIDARG);\r\n            }\r\n        }\r\n        break;\r\n");
     } 
 if (Model.Name == "UIElement") { 
            this.Write("    default:\r\n        IFC_RETURN(E_INVALIDARG);\r\n");
 } else { 
            this.Write("    default:\r\n        IFC_RETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.BaseClass.GeneratedClassFullName)));
            this.Write("::EventRemoveHandlerByIndex(nEventIndex, pHandler));\r\n");
 } 
            this.Write("        break;\r\n    }\r\n\r\n    return S_OK;\r\n}\r\n\r\n");
 } 
 if (Model.HasCustomFactory) { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<ClassFactory>(Model)));
            this.Write("\r\n");
 } 
            this.Write("\r\n");
 if (Model.IsActivatable || Model.IdlClassInfo.HasRuntimeClass) { 
            this.Write("namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(OMContext.DefaultImplementationNamespace));
            this.Write("\r\n{\r\n");
     if (Model.HasFactory) { 
            this.Write("    _Check_return_ IActivationFactory* ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.FactoryConstructor));
            this.Write("()\r\n    {\r\n        RRETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetFactoryFactory(Model)));
            this.Write(");\r\n    }\r\n");
     } 
            this.Write("}\r\n");
 } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
