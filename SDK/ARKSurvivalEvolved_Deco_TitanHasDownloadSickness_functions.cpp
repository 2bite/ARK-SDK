// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_TitanHasDownloadSickness_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_TitanHasDownloadSickness_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ReceiveConditionCheck");

	UDeco_TitanHasDownloadSickness_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ExecuteUbergraph_Deco_TitanHasDownloadSickness
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_TitanHasDownloadSickness_C::ExecuteUbergraph_Deco_TitanHasDownloadSickness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_TitanHasDownloadSickness.Deco_TitanHasDownloadSickness_C.ExecuteUbergraph_Deco_TitanHasDownloadSickness");

	UDeco_TitanHasDownloadSickness_C_ExecuteUbergraph_Deco_TitanHasDownloadSickness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
