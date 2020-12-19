// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_WyvAttackStateIce_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C.ExecuteUbergraph_RAG_WyvAttackStateIce
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URAG_WyvAttackStateIce_C::ExecuteUbergraph_RAG_WyvAttackStateIce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_WyvAttackStateIce.RAG_WyvAttackStateIce_C.ExecuteUbergraph_RAG_WyvAttackStateIce");

	URAG_WyvAttackStateIce_C_ExecuteUbergraph_RAG_WyvAttackStateIce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
