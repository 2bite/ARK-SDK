// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TeleportTag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TeleportTag.Buff_TeleportTag_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TeleportTag_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TeleportTag.Buff_TeleportTag_C.BPCustomAllowAddBuff");

	ABuff_TeleportTag_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TeleportTag.Buff_TeleportTag_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TeleportTag_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TeleportTag.Buff_TeleportTag_C.BPSetupForInstigator");

	ABuff_TeleportTag_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TeleportTag.Buff_TeleportTag_C.UserConstructionScript
// ()

void ABuff_TeleportTag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TeleportTag.Buff_TeleportTag_C.UserConstructionScript");

	ABuff_TeleportTag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TeleportTag.Buff_TeleportTag_C.ExecuteUbergraph_Buff_TeleportTag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TeleportTag_C::ExecuteUbergraph_Buff_TeleportTag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TeleportTag.Buff_TeleportTag_C.ExecuteUbergraph_Buff_TeleportTag");

	ABuff_TeleportTag_C_ExecuteUbergraph_Buff_TeleportTag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
