// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Para_FearTarget_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Para_FearTarget_TK.Para_FearTarget_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UPara_FearTarget_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_FearTarget_TK.Para_FearTarget_TK_C.ReceiveExecute");

	UPara_FearTarget_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_FearTarget_TK.Para_FearTarget_TK_C.ExecuteUbergraph_Para_FearTarget_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPara_FearTarget_TK_C::ExecuteUbergraph_Para_FearTarget_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_FearTarget_TK.Para_FearTarget_TK_C.ExecuteUbergraph_Para_FearTarget_TK");

	UPara_FearTarget_TK_C_ExecuteUbergraph_Para_FearTarget_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
