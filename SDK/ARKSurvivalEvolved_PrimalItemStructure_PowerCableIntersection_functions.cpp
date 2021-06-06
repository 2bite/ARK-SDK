// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PowerCableIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PowerCableIntersection.PrimalItemStructure_PowerCableIntersection_C.ExecuteUbergraph_PrimalItemStructure_PowerCableIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PowerCableIntersection_C::ExecuteUbergraph_PrimalItemStructure_PowerCableIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PowerCableIntersection.PrimalItemStructure_PowerCableIntersection_C.ExecuteUbergraph_PrimalItemStructure_PowerCableIntersection");

	UPrimalItemStructure_PowerCableIntersection_C_ExecuteUbergraph_PrimalItemStructure_PowerCableIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
