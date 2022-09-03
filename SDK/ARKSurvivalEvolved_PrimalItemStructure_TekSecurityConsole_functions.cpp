// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekSecurityConsole_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekSecurityConsole.PrimalItemStructure_TekSecurityConsole_C.ExecuteUbergraph_PrimalItemStructure_TekSecurityConsole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekSecurityConsole_C::ExecuteUbergraph_PrimalItemStructure_TekSecurityConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekSecurityConsole.PrimalItemStructure_TekSecurityConsole_C.ExecuteUbergraph_PrimalItemStructure_TekSecurityConsole");

	UPrimalItemStructure_TekSecurityConsole_C_ExecuteUbergraph_PrimalItemStructure_TekSecurityConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
