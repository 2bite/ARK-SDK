// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FenceFoundation_Tek.FenceFoundation_Tek_C.UserConstructionScript
// ()

void AFenceFoundation_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Tek.FenceFoundation_Tek_C.UserConstructionScript");

	AFenceFoundation_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Tek.FenceFoundation_Tek_C.ExecuteUbergraph_FenceFoundation_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Tek_C::ExecuteUbergraph_FenceFoundation_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Tek.FenceFoundation_Tek_C.ExecuteUbergraph_FenceFoundation_Tek");

	AFenceFoundation_Tek_C_ExecuteUbergraph_FenceFoundation_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
