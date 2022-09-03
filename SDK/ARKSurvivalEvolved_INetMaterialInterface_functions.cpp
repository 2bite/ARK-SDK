// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_INetMaterialInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function INetMaterialInterface.INetMaterialInterface_C.GetMaterialIndicesToSupportNet
// ()
// Parameters:
// TArray<int>                    MaterialIndices                (Parm, OutParm, ZeroConstructor)

void UINetMaterialInterface_C::GetMaterialIndicesToSupportNet(TArray<int>* MaterialIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function INetMaterialInterface.INetMaterialInterface_C.GetMaterialIndicesToSupportNet");

	UINetMaterialInterface_C_GetMaterialIndicesToSupportNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialIndices != nullptr)
		*MaterialIndices = params.MaterialIndices;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
