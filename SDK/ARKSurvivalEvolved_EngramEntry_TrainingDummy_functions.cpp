// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TrainingDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TrainingDummy.EngramEntry_TrainingDummy_C.ExecuteUbergraph_EngramEntry_TrainingDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TrainingDummy_C::ExecuteUbergraph_EngramEntry_TrainingDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TrainingDummy.EngramEntry_TrainingDummy_C.ExecuteUbergraph_EngramEntry_TrainingDummy");

	UEngramEntry_TrainingDummy_C_ExecuteUbergraph_EngramEntry_TrainingDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
