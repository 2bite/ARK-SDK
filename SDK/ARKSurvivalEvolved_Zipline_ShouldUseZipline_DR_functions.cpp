// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_ShouldUseZipline_DR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_ShouldUseZipline_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ReceiveConditionCheck");

	UZipline_ShouldUseZipline_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ExecuteUbergraph_Zipline_ShouldUseZipline_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_ShouldUseZipline_DR_C::ExecuteUbergraph_Zipline_ShouldUseZipline_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ShouldUseZipline_DR.Zipline_ShouldUseZipline_DR_C.ExecuteUbergraph_Zipline_ShouldUseZipline_DR");

	UZipline_ShouldUseZipline_DR_C_ExecuteUbergraph_Zipline_ShouldUseZipline_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
