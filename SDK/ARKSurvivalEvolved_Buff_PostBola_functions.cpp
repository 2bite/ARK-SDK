// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PostBola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PostBola.Buff_PostBola_C.UserConstructionScript
// ()

void ABuff_PostBola_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PostBola.Buff_PostBola_C.UserConstructionScript");

	ABuff_PostBola_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PostBola.Buff_PostBola_C.ExecuteUbergraph_Buff_PostBola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PostBola_C::ExecuteUbergraph_Buff_PostBola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PostBola.Buff_PostBola_C.ExecuteUbergraph_Buff_PostBola");

	ABuff_PostBola_C_ExecuteUbergraph_Buff_PostBola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
