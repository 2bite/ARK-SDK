// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalSpikeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalSpikeWall.PrimalItemStructure_MetalSpikeWall_C.ExecuteUbergraph_PrimalItemStructure_MetalSpikeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalSpikeWall_C::ExecuteUbergraph_PrimalItemStructure_MetalSpikeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalSpikeWall.PrimalItemStructure_MetalSpikeWall_C.ExecuteUbergraph_PrimalItemStructure_MetalSpikeWall");

	UPrimalItemStructure_MetalSpikeWall_C_ExecuteUbergraph_PrimalItemStructure_MetalSpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
