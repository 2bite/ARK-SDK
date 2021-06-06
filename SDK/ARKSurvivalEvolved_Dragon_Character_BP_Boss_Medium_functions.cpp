// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dragon_Character_BP_Boss_Medium.Dragon_Character_BP_Boss_Medium_C.UserConstructionScript
// ()

void ADragon_Character_BP_Boss_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss_Medium.Dragon_Character_BP_Boss_Medium_C.UserConstructionScript");

	ADragon_Character_BP_Boss_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss_Medium.Dragon_Character_BP_Boss_Medium_C.ExecuteUbergraph_Dragon_Character_BP_Boss_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_Boss_Medium_C::ExecuteUbergraph_Dragon_Character_BP_Boss_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss_Medium.Dragon_Character_BP_Boss_Medium_C.ExecuteUbergraph_Dragon_Character_BP_Boss_Medium");

	ADragon_Character_BP_Boss_Medium_C_ExecuteUbergraph_Dragon_Character_BP_Boss_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
