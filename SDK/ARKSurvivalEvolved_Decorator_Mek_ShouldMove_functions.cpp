// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_Mek_ShouldMove_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ReceiveExecutionStart
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_Mek_ShouldMove_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ReceiveExecutionStart");

	UDecorator_Mek_ShouldMove_C_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ExecuteUbergraph_Decorator_Mek_ShouldMove
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_Mek_ShouldMove_C::ExecuteUbergraph_Decorator_Mek_ShouldMove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ExecuteUbergraph_Decorator_Mek_ShouldMove");

	UDecorator_Mek_ShouldMove_C_ExecuteUbergraph_Decorator_Mek_ShouldMove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
