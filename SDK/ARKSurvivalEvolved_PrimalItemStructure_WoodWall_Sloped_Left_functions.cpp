// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodWall_Sloped_Left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodWall_Sloped_Left.PrimalItemStructure_WoodWall_Sloped_Left_C.ExecuteUbergraph_PrimalItemStructure_WoodWall_Sloped_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodWall_Sloped_Left_C::ExecuteUbergraph_PrimalItemStructure_WoodWall_Sloped_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodWall_Sloped_Left.PrimalItemStructure_WoodWall_Sloped_Left_C.ExecuteUbergraph_PrimalItemStructure_WoodWall_Sloped_Left");

	UPrimalItemStructure_WoodWall_Sloped_Left_C_ExecuteUbergraph_PrimalItemStructure_WoodWall_Sloped_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
