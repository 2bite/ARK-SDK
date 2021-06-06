// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataHelperFunctions_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
// ()
// Parameters:
// class AShooterPlayerState*     For_Player_State               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       New_Player_Character           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Ascension_Data                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            HexagonCount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChibiLevelUpsCount             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnlockedAllExplorerNotes      (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataHelperFunctions_C::Apply_To_Player_Pawn_Character(class AShooterPlayerState* For_Player_State, class AShooterCharacter* New_Player_Character, int HexagonCount, int ChibiLevelUpsCount, bool bUnlockedAllExplorerNotes, TArray<float>* Ascension_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character");

	UPrimalPlayerDataHelperFunctions_C_Apply_To_Player_Pawn_Character_Params params;
	params.For_Player_State = For_Player_State;
	params.New_Player_Character = New_Player_Character;
	params.HexagonCount = HexagonCount;
	params.ChibiLevelUpsCount = ChibiLevelUpsCount;
	params.bUnlockedAllExplorerNotes = bUnlockedAllExplorerNotes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ascension_Data != nullptr)
		*Ascension_Data = params.Ascension_Data;
}


// Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.ExecuteUbergraph_PrimalPlayerDataHelperFunctions
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataHelperFunctions_C::ExecuteUbergraph_PrimalPlayerDataHelperFunctions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.ExecuteUbergraph_PrimalPlayerDataHelperFunctions");

	UPrimalPlayerDataHelperFunctions_C_ExecuteUbergraph_PrimalPlayerDataHelperFunctions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
