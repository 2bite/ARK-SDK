// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_KingKaijuMecha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_KingKaijuMecha.PrimalItemStructure_Flag_KingKaijuMecha_C.ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_KingKaijuMecha_C::ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_KingKaijuMecha.PrimalItemStructure_Flag_KingKaijuMecha_C.ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha");

	UPrimalItemStructure_Flag_KingKaijuMecha_C_ExecuteUbergraph_PrimalItemStructure_Flag_KingKaijuMecha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
