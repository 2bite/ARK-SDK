// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Raft_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Raft_BP.Raft_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARaft_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raft_BP.Raft_BP_C.BPCanCryo");

	ARaft_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Raft_BP.Raft_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ARaft_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raft_BP.Raft_BP_C.ReceiveAnyDamage");

	ARaft_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raft_BP.Raft_BP_C.UserConstructionScript
// ()

void ARaft_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raft_BP.Raft_BP_C.UserConstructionScript");

	ARaft_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raft_BP.Raft_BP_C.DoPlayKnockAnimation
// ()
// Parameters:
// int                            KnockDirectionIndex            (Parm, ZeroConstructor, IsPlainOldData)

void ARaft_BP_C::DoPlayKnockAnimation(int KnockDirectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raft_BP.Raft_BP_C.DoPlayKnockAnimation");

	ARaft_BP_C_DoPlayKnockAnimation_Params params;
	params.KnockDirectionIndex = KnockDirectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raft_BP.Raft_BP_C.ExecuteUbergraph_Raft_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARaft_BP_C::ExecuteUbergraph_Raft_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raft_BP.Raft_BP_C.ExecuteUbergraph_Raft_BP");

	ARaft_BP_C_ExecuteUbergraph_Raft_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
