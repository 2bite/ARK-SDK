// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_PoopRoar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.UserConstructionScript
// ()

void ABuff_Stunned_PoopRoar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.UserConstructionScript");

	ABuff_Stunned_PoopRoar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.ExecuteUbergraph_Buff_Stunned_PoopRoar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_PoopRoar_C::ExecuteUbergraph_Buff_Stunned_PoopRoar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_PoopRoar.Buff_Stunned_PoopRoar_C.ExecuteUbergraph_Buff_Stunned_PoopRoar");

	ABuff_Stunned_PoopRoar_C_ExecuteUbergraph_Buff_Stunned_PoopRoar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
