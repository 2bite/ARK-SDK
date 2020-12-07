// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonGasCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoisonGasCloud.PoisonGasCloud_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APoisonGasCloud_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasCloud.PoisonGasCloud_C.BPCustomAllowAddBuff");

	APoisonGasCloud_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PoisonGasCloud.PoisonGasCloud_C.UserConstructionScript
// ()

void APoisonGasCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasCloud.PoisonGasCloud_C.UserConstructionScript");

	APoisonGasCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonGasCloud.PoisonGasCloud_C.ExecuteUbergraph_PoisonGasCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoisonGasCloud_C::ExecuteUbergraph_PoisonGasCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasCloud.PoisonGasCloud_C.ExecuteUbergraph_PoisonGasCloud");

	APoisonGasCloud_C_ExecuteUbergraph_PoisonGasCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
