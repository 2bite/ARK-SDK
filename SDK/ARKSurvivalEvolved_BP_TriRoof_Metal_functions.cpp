// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriRoof_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TriRoof_Metal.BP_TriRoof_Metal_C.UserConstructionScript
// ()

void ABP_TriRoof_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriRoof_Metal.BP_TriRoof_Metal_C.UserConstructionScript");

	ABP_TriRoof_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TriRoof_Metal.BP_TriRoof_Metal_C.ExecuteUbergraph_BP_TriRoof_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TriRoof_Metal_C::ExecuteUbergraph_BP_TriRoof_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriRoof_Metal.BP_TriRoof_Metal_C.ExecuteUbergraph_BP_TriRoof_Metal");

	ABP_TriRoof_Metal_C_ExecuteUbergraph_BP_TriRoof_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
