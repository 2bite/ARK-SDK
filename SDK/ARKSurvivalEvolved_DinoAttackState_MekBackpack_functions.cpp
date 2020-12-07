// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekBackpack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackTick
// (NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekBackpack_C::STATIC_BPOnAttackTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackTick");

	UDinoAttackState_MekBackpack_C_BPOnAttackTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekBackpack_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.BPOnAttackStart");

	UDinoAttackState_MekBackpack_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.GetMuzzleInfo
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekBackpack_C::GetMuzzleInfo(struct FVector* Location, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.GetMuzzleInfo");

	UDinoAttackState_MekBackpack_C_GetMuzzleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.ExecuteUbergraph_DinoAttackState_MekBackpack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekBackpack_C::ExecuteUbergraph_DinoAttackState_MekBackpack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekBackpack.DinoAttackState_MekBackpack_C.ExecuteUbergraph_DinoAttackState_MekBackpack");

	UDinoAttackState_MekBackpack_C_ExecuteUbergraph_DinoAttackState_MekBackpack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
