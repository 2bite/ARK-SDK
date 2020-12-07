// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DedicatedStorage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_DedicatedStorage.PrimalItemStructure_DedicatedStorage_C.ExecuteUbergraph_PrimalItemStructure_DedicatedStorage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_DedicatedStorage_C::ExecuteUbergraph_PrimalItemStructure_DedicatedStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DedicatedStorage.PrimalItemStructure_DedicatedStorage_C.ExecuteUbergraph_PrimalItemStructure_DedicatedStorage");

	UPrimalItemStructure_DedicatedStorage_C_ExecuteUbergraph_PrimalItemStructure_DedicatedStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
