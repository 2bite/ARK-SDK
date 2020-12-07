// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Skybox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_Skybox.Ext_Skybox_C.ExecuteUbergraph_Ext_Skybox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExt_Skybox_C::ExecuteUbergraph_Ext_Skybox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Skybox.Ext_Skybox_C.ExecuteUbergraph_Ext_Skybox");

	AExt_Skybox_C_ExecuteUbergraph_Ext_Skybox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
