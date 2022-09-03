// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_Rug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Furniture_Rug.PrimalItemStructure_Furniture_Rug_C.ExecuteUbergraph_PrimalItemStructure_Furniture_Rug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Furniture_Rug_C::ExecuteUbergraph_PrimalItemStructure_Furniture_Rug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Furniture_Rug.PrimalItemStructure_Furniture_Rug_C.ExecuteUbergraph_PrimalItemStructure_Furniture_Rug");

	UPrimalItemStructure_Furniture_Rug_C_ExecuteUbergraph_PrimalItemStructure_Furniture_Rug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
