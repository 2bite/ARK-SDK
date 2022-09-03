// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Charge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function C4Charge.C4Charge_C.BPPreventPlacementOnPawn
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ForBone                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AC4Charge_C::BPPreventPlacementOnPawn(class APlayerController** PC, class APrimalCharacter** forCharacter, struct FName* ForBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge.C4Charge_C.BPPreventPlacementOnPawn");

	AC4Charge_C_BPPreventPlacementOnPawn_Params params;
	params.PC = PC;
	params.forCharacter = forCharacter;
	params.ForBone = ForBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function C4Charge.C4Charge_C.UserConstructionScript
// ()

void AC4Charge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge.C4Charge_C.UserConstructionScript");

	AC4Charge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C4Charge.C4Charge_C.ExecuteUbergraph_C4Charge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AC4Charge_C::ExecuteUbergraph_C4Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge.C4Charge_C.ExecuteUbergraph_C4Charge");

	AC4Charge_C_ExecuteUbergraph_C4Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
