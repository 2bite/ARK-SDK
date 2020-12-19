// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WindTurbine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WindTurbine.PrimalItemStructure_WindTurbine_C.ExecuteUbergraph_PrimalItemStructure_WindTurbine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WindTurbine_C::ExecuteUbergraph_PrimalItemStructure_WindTurbine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WindTurbine.PrimalItemStructure_WindTurbine_C.ExecuteUbergraph_PrimalItemStructure_WindTurbine");

	UPrimalItemStructure_WindTurbine_C_ExecuteUbergraph_PrimalItemStructure_WindTurbine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
