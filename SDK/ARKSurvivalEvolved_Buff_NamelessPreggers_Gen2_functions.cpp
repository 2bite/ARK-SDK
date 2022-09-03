// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NamelessPreggers_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NamelessPreggers_Gen2.Buff_NamelessPreggers_Gen2_C.UserConstructionScript
// ()

void ABuff_NamelessPreggers_Gen2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers_Gen2.Buff_NamelessPreggers_Gen2_C.UserConstructionScript");

	ABuff_NamelessPreggers_Gen2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers_Gen2.Buff_NamelessPreggers_Gen2_C.ExecuteUbergraph_Buff_NamelessPreggers_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_Gen2_C::ExecuteUbergraph_Buff_NamelessPreggers_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers_Gen2.Buff_NamelessPreggers_Gen2_C.ExecuteUbergraph_Buff_NamelessPreggers_Gen2");

	ABuff_NamelessPreggers_Gen2_C_ExecuteUbergraph_Buff_NamelessPreggers_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
