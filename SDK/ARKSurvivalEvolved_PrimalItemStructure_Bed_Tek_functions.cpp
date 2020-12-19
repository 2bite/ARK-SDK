// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Bed_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Bed_Tek.PrimalItemStructure_Bed_Tek_C.ExecuteUbergraph_PrimalItemStructure_Bed_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Bed_Tek_C::ExecuteUbergraph_PrimalItemStructure_Bed_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Bed_Tek.PrimalItemStructure_Bed_Tek_C.ExecuteUbergraph_PrimalItemStructure_Bed_Tek");

	UPrimalItemStructure_Bed_Tek_C_ExecuteUbergraph_PrimalItemStructure_Bed_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
