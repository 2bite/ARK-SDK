// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_Armor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.UserConstructionScript
// ()

void AProjAmargaSpike_Armor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.UserConstructionScript");

	AProjAmargaSpike_Armor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.ExecuteUbergraph_ProjAmargaSpike_Armor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjAmargaSpike_Armor_C::ExecuteUbergraph_ProjAmargaSpike_Armor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.ExecuteUbergraph_ProjAmargaSpike_Armor");

	AProjAmargaSpike_Armor_C_ExecuteUbergraph_ProjAmargaSpike_Armor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
