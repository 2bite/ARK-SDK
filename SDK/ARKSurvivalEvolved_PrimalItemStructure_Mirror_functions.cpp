// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Mirror_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Mirror.PrimalItemStructure_Mirror_C.ExecuteUbergraph_PrimalItemStructure_Mirror
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Mirror_C::ExecuteUbergraph_PrimalItemStructure_Mirror(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Mirror.PrimalItemStructure_Mirror_C.ExecuteUbergraph_PrimalItemStructure_Mirror");

	UPrimalItemStructure_Mirror_C_ExecuteUbergraph_PrimalItemStructure_Mirror_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
