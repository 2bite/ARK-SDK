// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kentrosaurus_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kentrosaurus_Chibi_AnimBP.Kentrosaurus_Chibi_AnimBP_C.ExecuteUbergraph_Kentrosaurus_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UKentrosaurus_Chibi_AnimBP_C::ExecuteUbergraph_Kentrosaurus_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kentrosaurus_Chibi_AnimBP.Kentrosaurus_Chibi_AnimBP_C.ExecuteUbergraph_Kentrosaurus_Chibi_AnimBP");

	UKentrosaurus_Chibi_AnimBP_C_ExecuteUbergraph_Kentrosaurus_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
