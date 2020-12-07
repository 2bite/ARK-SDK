// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.AnyKaijuIsInFrontNearby
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_AIController_BP_C::AnyKaijuIsInFrontNearby(class APrimalDinoCharacter* Dino, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.AnyKaijuIsInFrontNearby");

	AKingKaiju_AIController_BP_C_AnyKaijuIsInFrontNearby_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.ShouldAttackCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_AIController_BP_C::ShouldAttackCharacter(class APrimalCharacter* Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.ShouldAttackCharacter");

	AKingKaiju_AIController_BP_C_ShouldAttackCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.BPSetupFindTarget
// ()

void AKingKaiju_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.BPSetupFindTarget");

	AKingKaiju_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.UserConstructionScript
// ()

void AKingKaiju_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.UserConstructionScript");

	AKingKaiju_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.ExecuteUbergraph_KingKaiju_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_AIController_BP_C::ExecuteUbergraph_KingKaiju_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.ExecuteUbergraph_KingKaiju_AIController_BP");

	AKingKaiju_AIController_BP_C_ExecuteUbergraph_KingKaiju_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
