// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Haircuttable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C.DoHaircut
// ()
// Parameters:
// class AShooterCharacter*       FromPlayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Haircuttable_C::DoHaircut(class AShooterCharacter* FromPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C.DoHaircut");

	ADino_Character_BP_Haircuttable_C_DoHaircut_Params params;
	params.FromPlayer = FromPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C.UserConstructionScript
// ()

void ADino_Character_BP_Haircuttable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C.UserConstructionScript");

	ADino_Character_BP_Haircuttable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C.ExecuteUbergraph_Dino_Character_BP_Haircuttable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Haircuttable_C::ExecuteUbergraph_Dino_Character_BP_Haircuttable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C.ExecuteUbergraph_Dino_Character_BP_Haircuttable");

	ADino_Character_BP_Haircuttable_C_ExecuteUbergraph_Dino_Character_BP_Haircuttable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
