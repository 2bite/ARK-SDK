// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AmmoContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AmmoContainer.PrimalItemStructure_AmmoContainer_C.ExecuteUbergraph_PrimalItemStructure_AmmoContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AmmoContainer_C::ExecuteUbergraph_PrimalItemStructure_AmmoContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AmmoContainer.PrimalItemStructure_AmmoContainer_C.ExecuteUbergraph_PrimalItemStructure_AmmoContainer");

	UPrimalItemStructure_AmmoContainer_C_ExecuteUbergraph_PrimalItemStructure_AmmoContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
