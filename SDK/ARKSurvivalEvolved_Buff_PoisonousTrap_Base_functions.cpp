// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousTrap_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.ReceiveBeginPlay
// ()

void ABuff_PoisonousTrap_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.ReceiveBeginPlay");

	ABuff_PoisonousTrap_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonousTrap_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.BuffTickClient");

	ABuff_PoisonousTrap_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PoisonousTrap_Base_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.BPCustomAllowAddBuff");

	ABuff_PoisonousTrap_Base_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.UserConstructionScript
// ()

void ABuff_PoisonousTrap_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.UserConstructionScript");

	ABuff_PoisonousTrap_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.ExecuteUbergraph_Buff_PoisonousTrap_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonousTrap_Base_C::ExecuteUbergraph_Buff_PoisonousTrap_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.ExecuteUbergraph_Buff_PoisonousTrap_Base");

	ABuff_PoisonousTrap_Base_C_ExecuteUbergraph_Buff_PoisonousTrap_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
