// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeginFly_TK_Archa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBeginFly_TK_Archa_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ReceiveExecute");

	UBeginFly_TK_Archa_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ExecuteUbergraph_BeginFly_TK_Archa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBeginFly_TK_Archa_C::ExecuteUbergraph_BeginFly_TK_Archa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ExecuteUbergraph_BeginFly_TK_Archa");

	UBeginFly_TK_Archa_C_ExecuteUbergraph_BeginFly_TK_Archa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
