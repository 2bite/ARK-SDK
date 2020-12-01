// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalRoof_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MetalRoof_SM.MetalRoof_SM_C.UserConstructionScript
// ()

void AMetalRoof_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MetalRoof_SM.MetalRoof_SM_C.UserConstructionScript");

	AMetalRoof_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MetalRoof_SM.MetalRoof_SM_C.ExecuteUbergraph_MetalRoof_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMetalRoof_SM_C::ExecuteUbergraph_MetalRoof_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MetalRoof_SM.MetalRoof_SM_C.ExecuteUbergraph_MetalRoof_SM");

	AMetalRoof_SM_C_ExecuteUbergraph_MetalRoof_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
