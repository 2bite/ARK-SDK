// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_TurtleShell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_TurtleShell.PrimalItemResource_TurtleShell_C.ExecuteUbergraph_PrimalItemResource_TurtleShell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_TurtleShell_C::ExecuteUbergraph_PrimalItemResource_TurtleShell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_TurtleShell.PrimalItemResource_TurtleShell_C.ExecuteUbergraph_PrimalItemResource_TurtleShell");

	UPrimalItemResource_TurtleShell_C_ExecuteUbergraph_PrimalItemResource_TurtleShell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
