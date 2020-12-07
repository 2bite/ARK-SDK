// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodSpikeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodSpikeWall.PrimalItemStructure_WoodSpikeWall_C.ExecuteUbergraph_PrimalItemStructure_WoodSpikeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodSpikeWall_C::ExecuteUbergraph_PrimalItemStructure_WoodSpikeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodSpikeWall.PrimalItemStructure_WoodSpikeWall_C.ExecuteUbergraph_PrimalItemStructure_WoodSpikeWall");

	UPrimalItemStructure_WoodSpikeWall_C_ExecuteUbergraph_PrimalItemStructure_WoodSpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
