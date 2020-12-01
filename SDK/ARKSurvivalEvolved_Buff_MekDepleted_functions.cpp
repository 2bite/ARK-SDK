// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekDepleted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekDepleted.Buff_MekDepleted_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekDepleted_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.BuffTickServer");

	ABuff_MekDepleted_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MekDepleted_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.BPCustomAllowAddBuff");

	ABuff_MekDepleted_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekDepleted_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.BPDeactivated");

	ABuff_MekDepleted_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekDepleted_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.BPSetupForInstigator");

	ABuff_MekDepleted_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.UserConstructionScript
// ()

void ABuff_MekDepleted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.UserConstructionScript");

	ABuff_MekDepleted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__FinishedFunc
// ()

void ABuff_MekDepleted_C::DepleteMek__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__FinishedFunc");

	ABuff_MekDepleted_C_DepleteMek__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__UpdateFunc
// ()

void ABuff_MekDepleted_C::DepleteMek__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__UpdateFunc");

	ABuff_MekDepleted_C_DepleteMek__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.MultiStartDepleteMek
// ()

void ABuff_MekDepleted_C::MultiStartDepleteMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.MultiStartDepleteMek");

	ABuff_MekDepleted_C_MultiStartDepleteMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.AutoDepleteMek
// ()

void ABuff_MekDepleted_C::AutoDepleteMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.AutoDepleteMek");

	ABuff_MekDepleted_C_AutoDepleteMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekDepleted.Buff_MekDepleted_C.ExecuteUbergraph_Buff_MekDepleted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekDepleted_C::ExecuteUbergraph_Buff_MekDepleted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekDepleted.Buff_MekDepleted_C.ExecuteUbergraph_Buff_MekDepleted");

	ABuff_MekDepleted_C_ExecuteUbergraph_Buff_MekDepleted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
