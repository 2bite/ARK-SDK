// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PauseBrain_SootheLeed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PauseBrain_SootheLeed_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.PreventActorTargeting");

	ABuff_PauseBrain_SootheLeed_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PauseBrain_SootheLeed_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPCustomAllowAddBuff");

	ABuff_PauseBrain_SootheLeed_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PauseBrain_SootheLeed_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPActivated");

	ABuff_PauseBrain_SootheLeed_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.UserConstructionScript
// ()

void ABuff_PauseBrain_SootheLeed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.UserConstructionScript");

	ABuff_PauseBrain_SootheLeed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.ExecuteUbergraph_Buff_PauseBrain_SootheLeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PauseBrain_SootheLeed_C::ExecuteUbergraph_Buff_PauseBrain_SootheLeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.ExecuteUbergraph_Buff_PauseBrain_SootheLeed");

	ABuff_PauseBrain_SootheLeed_C_ExecuteUbergraph_Buff_PauseBrain_SootheLeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
