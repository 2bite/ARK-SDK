// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreeSapTap_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TreeSapTap_SM.TreeSapTap_SM_C.UserConstructionScript
// ()

void ATreeSapTap_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TreeSapTap_SM.TreeSapTap_SM_C.UserConstructionScript");

	ATreeSapTap_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TreeSapTap_SM.TreeSapTap_SM_C.ExecuteUbergraph_TreeSapTap_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreeSapTap_SM_C::ExecuteUbergraph_TreeSapTap_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TreeSapTap_SM.TreeSapTap_SM_C.ExecuteUbergraph_TreeSapTap_SM");

	ATreeSapTap_SM_C_ExecuteUbergraph_TreeSapTap_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
