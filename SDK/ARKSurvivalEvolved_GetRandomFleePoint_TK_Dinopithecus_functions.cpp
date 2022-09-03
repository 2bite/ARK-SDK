// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GetRandomFleePoint_TK_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GetRandomFleePoint_TK_Dinopithecus.GetRandomFleePoint_TK_Dinopithecus_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomFleePoint_TK_Dinopithecus_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomFleePoint_TK_Dinopithecus.GetRandomFleePoint_TK_Dinopithecus_C.ReceiveExecute");

	UGetRandomFleePoint_TK_Dinopithecus_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GetRandomFleePoint_TK_Dinopithecus.GetRandomFleePoint_TK_Dinopithecus_C.ExecuteUbergraph_GetRandomFleePoint_TK_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomFleePoint_TK_Dinopithecus_C::ExecuteUbergraph_GetRandomFleePoint_TK_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomFleePoint_TK_Dinopithecus.GetRandomFleePoint_TK_Dinopithecus_C.ExecuteUbergraph_GetRandomFleePoint_TK_Dinopithecus");

	UGetRandomFleePoint_TK_Dinopithecus_C_ExecuteUbergraph_GetRandomFleePoint_TK_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
