// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Boots_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Boots_Gen2.Buff_TekArmor_Boots_Gen2_C.UserConstructionScript
// ()

void ABuff_TekArmor_Boots_Gen2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots_Gen2.Buff_TekArmor_Boots_Gen2_C.UserConstructionScript");

	ABuff_TekArmor_Boots_Gen2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots_Gen2.Buff_TekArmor_Boots_Gen2_C.ExecuteUbergraph_Buff_TekArmor_Boots_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_Gen2_C::ExecuteUbergraph_Buff_TekArmor_Boots_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots_Gen2.Buff_TekArmor_Boots_Gen2_C.ExecuteUbergraph_Buff_TekArmor_Boots_Gen2");

	ABuff_TekArmor_Boots_Gen2_C_ExecuteUbergraph_Buff_TekArmor_Boots_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
