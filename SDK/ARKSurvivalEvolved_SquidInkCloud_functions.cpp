// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SquidInkCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SquidInkCloud.SquidInkCloud_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASquidInkCloud_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquidInkCloud.SquidInkCloud_C.BPCustomAllowAddBuff");

	ASquidInkCloud_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SquidInkCloud.SquidInkCloud_C.UserConstructionScript
// ()

void ASquidInkCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquidInkCloud.SquidInkCloud_C.UserConstructionScript");

	ASquidInkCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquidInkCloud.SquidInkCloud_C.ExecuteUbergraph_SquidInkCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASquidInkCloud_C::ExecuteUbergraph_SquidInkCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquidInkCloud.SquidInkCloud_C.ExecuteUbergraph_SquidInkCloud");

	ASquidInkCloud_C_ExecuteUbergraph_SquidInkCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
