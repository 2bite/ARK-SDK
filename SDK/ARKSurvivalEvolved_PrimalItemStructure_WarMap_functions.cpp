// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WarMap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WarMap.PrimalItemStructure_WarMap_C.ExecuteUbergraph_PrimalItemStructure_WarMap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WarMap_C::ExecuteUbergraph_PrimalItemStructure_WarMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WarMap.PrimalItemStructure_WarMap_C.ExecuteUbergraph_PrimalItemStructure_WarMap");

	UPrimalItemStructure_WarMap_C_ExecuteUbergraph_PrimalItemStructure_WarMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
