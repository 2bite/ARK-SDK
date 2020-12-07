// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Bola_Xmas_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Bola_Xmas.Buff_Bola_Xmas_C.UserConstructionScript
// ()

void ABuff_Bola_Xmas_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bola_Xmas.Buff_Bola_Xmas_C.UserConstructionScript");

	ABuff_Bola_Xmas_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Bola_Xmas.Buff_Bola_Xmas_C.ExecuteUbergraph_Buff_Bola_Xmas
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Bola_Xmas_C::ExecuteUbergraph_Buff_Bola_Xmas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bola_Xmas.Buff_Bola_Xmas_C.ExecuteUbergraph_Buff_Bola_Xmas");

	ABuff_Bola_Xmas_C_ExecuteUbergraph_Buff_Bola_Xmas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
