// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TrainingDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TrainingDummy.PrimalItemStructure_TrainingDummy_C.ExecuteUbergraph_PrimalItemStructure_TrainingDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TrainingDummy_C::ExecuteUbergraph_PrimalItemStructure_TrainingDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TrainingDummy.PrimalItemStructure_TrainingDummy_C.ExecuteUbergraph_PrimalItemStructure_TrainingDummy");

	UPrimalItemStructure_TrainingDummy_C_ExecuteUbergraph_PrimalItemStructure_TrainingDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
