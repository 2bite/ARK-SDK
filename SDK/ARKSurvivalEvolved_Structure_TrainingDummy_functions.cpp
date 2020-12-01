// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TrainingDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, Const, NetValidate)

void AStructure_TrainingDummy_C::ReportDPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS");

	AStructure_TrainingDummy_C_ReportDPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_TrainingDummy_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPAdjustDamage");

	AStructure_TrainingDummy_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.UserConstructionScript
// ()

void AStructure_TrainingDummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.UserConstructionScript");

	AStructure_TrainingDummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.TookDamage
// ()

void AStructure_TrainingDummy_C::TookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.TookDamage");

	AStructure_TrainingDummy_C_TookDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ExecuteUbergraph_Structure_TrainingDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TrainingDummy_C::ExecuteUbergraph_Structure_TrainingDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.ExecuteUbergraph_Structure_TrainingDummy");

	AStructure_TrainingDummy_C_ExecuteUbergraph_Structure_TrainingDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
