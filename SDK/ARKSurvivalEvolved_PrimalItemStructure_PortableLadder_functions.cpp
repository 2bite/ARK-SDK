// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PortableLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PortableLadder.PrimalItemStructure_PortableLadder_C.ExecuteUbergraph_PrimalItemStructure_PortableLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PortableLadder_C::ExecuteUbergraph_PrimalItemStructure_PortableLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PortableLadder.PrimalItemStructure_PortableLadder_C.ExecuteUbergraph_PrimalItemStructure_PortableLadder");

	UPrimalItemStructure_PortableLadder_C_ExecuteUbergraph_PrimalItemStructure_PortableLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
