// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Bleeding_Kentro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Bleeding_Kentro.Buff_Bleeding_Kentro_C.UserConstructionScript
// ()

void ABuff_Bleeding_Kentro_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bleeding_Kentro.Buff_Bleeding_Kentro_C.UserConstructionScript");

	ABuff_Bleeding_Kentro_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Bleeding_Kentro.Buff_Bleeding_Kentro_C.ExecuteUbergraph_Buff_Bleeding_Kentro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Bleeding_Kentro_C::ExecuteUbergraph_Buff_Bleeding_Kentro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bleeding_Kentro.Buff_Bleeding_Kentro_C.ExecuteUbergraph_Buff_Bleeding_Kentro");

	ABuff_Bleeding_Kentro_C_ExecuteUbergraph_Buff_Bleeding_Kentro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
